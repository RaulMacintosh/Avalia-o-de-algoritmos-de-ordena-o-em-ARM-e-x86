#include <iostream>
#include <fstream>    
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

void fillVector(int size, int *vector, int seed){
  int value; 	
  srand(seed);

  for(int i = 0; i < size; i++){
    value = rand() % size;
    vector[i] = value;
  }
}

void ShowVector(int size, int *vector){
  for(int i = 0; i<size; i++){
    cout << vector[i] << " ";
  }
}

void SelectionSort (int max, int vector[]){
  for (int i = 0; i < (max - 1); i++){
    int min = i;

    for (int j = i + 1; j < max; j++){
      if (vector[j] < vector[min]){
        min = j;
      }
    }
    if (i != min){
      int aux = vector[i];
      vector[i] = vector[min];
      vector[min] = aux;
    }
  }
}

template <typename T>
string NumberToString(T number){
  ostringstream temp;
  temp << number;
  return temp.str();
}

int main(void){

  // variáveis para calcular clock
  clock_t clock1,clock2;

  double samples[20][10];

  ofstream file;
  file.open("Clock_SelectionSort.dat");

  // tamanhos dos vetores 
  int tm5k = 5000;
  int tm10k = 10000;
  int tm15k = 15000;
  int tm20k = 20000;
  int tm25k = 25000;
  int tm30k = 30000;
  int tm35k = 35000;
  int tm40k = 40000;
  int tm45k = 45000;
  int tm50k = 50000;
  int tm55k = 55000;
  int tm60k = 60000;
  int tm65k = 65000;
  int tm70k = 70000;
  int tm75k = 75000;
  int tm80k = 80000;
  int tm85k = 85000;
  int tm90k = 90000;
  int tm95k = 95000;
  int tm100k = 100000;

  // criação dos vetores
  int vector5k[tm5k];
  int vector10k[tm10k];
  int vector15k[tm15k];
  int vector20k[tm20k];
  int vector25k[tm25k];
  int vector30k[tm30k];
  int vector35k[tm35k];
  int vector40k[tm40k];
  int vector45k[tm45k];
  int vector50k[tm50k];
  int vector55k[tm55k];
  int vector60k[tm60k];
  int vector65k[tm65k];
  int vector70k[tm70k];
  int vector75k[tm75k];
  int vector80k[tm80k];
  int vector85k[tm85k];
  int vector90k[tm90k];
  int vector95k[tm95k];
  int vector100k[tm100k];

  for(int i = 0; i < 10; i++){
    cout << "Semente i:" << i << endl;

    fillVector(tm5k, vector5k, i);
    fillVector(tm10k, vector10k, i);
    fillVector(tm15k, vector15k, i);
    fillVector(tm20k, vector20k, i);
    fillVector(tm25k, vector25k, i);
    fillVector(tm30k, vector30k, i);
    fillVector(tm35k, vector35k, i);
    fillVector(tm40k, vector40k, i);
    fillVector(tm45k, vector45k, i);
    fillVector(tm50k, vector50k, i);
    fillVector(tm55k, vector55k, i);
    fillVector(tm60k, vector60k, i);
    fillVector(tm65k, vector65k, i);
    fillVector(tm70k, vector70k, i);
    fillVector(tm75k, vector75k, i);
    fillVector(tm80k, vector80k, i);
    fillVector(tm85k, vector85k, i);
    fillVector(tm90k, vector90k, i);
    fillVector(tm95k, vector95k, i);
    fillVector(tm100k, vector100k, i);

    cout << "-- SelectionSort --" << endl;
    clock1 = clock();
    SelectionSort(tm5k,vector5k);
    clock2 = clock();
    samples[0][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm5k<<"]"<<"clock para ordenacao: "<<samples[0][i]<<endl;

    clock1 = clock();
    SelectionSort(tm10k,vector10k);
    clock2 = clock();
    samples[1][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm10k<<"]"<<"clock para ordenacao: "<<samples[1][i]<<endl;

    clock1 = clock();
    SelectionSort(tm15k,vector15k);
    clock2 = clock();
    samples[2][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm15k<<"]"<<"clock para ordenacao: "<<samples[2][i]<<endl;

    clock1 = clock();
    SelectionSort(tm20k,vector20k);
    clock2 = clock();
    samples[3][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm20k<<"]"<<"clock para ordenacao: "<<samples[3][i]<<endl;

    clock1 = clock();
    SelectionSort(tm25k,vector25k);
    clock2 = clock();
    samples[4][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm25k<<"]"<<"clock para ordenacao: "<<samples[4][i]<<endl;

    clock1 = clock();
    SelectionSort(tm30k,vector30k);
    clock2 = clock();
    samples[5][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm30k<<"]"<<"clock para ordenacao: "<<samples[5][i]<<endl;

    clock1 = clock();
    SelectionSort(tm35k,vector35k);
    clock2 = clock();
    samples[6][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm35k<<"]"<<"clock para ordenacao: "<<samples[6][i]<<endl;

    clock1 = clock();
    SelectionSort(tm40k,vector40k);
    clock2 = clock();
    samples[7][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm40k<<"]"<<"clock para ordenacao: "<<samples[7][i]<<endl;

    clock1 = clock();
    SelectionSort(tm45k,vector45k);
    clock2 = clock();
    samples[8][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm45k<<"]"<<"clock para ordenacao: "<<samples[8][i]<<endl;

    clock1 = clock();
    SelectionSort(tm50k,vector50k);
    clock2 = clock();
    samples[9][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm50k<<"]"<<"clock para ordenacao: "<<samples[9][i]<<endl;

    clock1 = clock();
    SelectionSort(tm55k,vector55k);
    clock2 = clock();
    samples[10][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm55k<<"]"<<"clock para ordenacao: "<<samples[10][i]<<endl;

    clock1 = clock();
    SelectionSort(tm60k,vector60k);
    clock2 = clock();
    samples[11][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm60k<<"]"<<"clock para ordenacao: "<<samples[11][i]<<endl;

    clock1 = clock();
    SelectionSort(tm65k,vector65k);
    clock2 = clock();
    samples[12][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm65k<<"]"<<"clock para ordenacao: "<<samples[12][i]<<endl;

    clock1 = clock();
    SelectionSort(tm70k,vector70k);
    clock2 = clock();
    samples[13][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm70k<<"]"<<"clock para ordenacao: "<<samples[13][i]<<endl;

    clock1 = clock();
    SelectionSort(tm75k,vector75k);
    clock2 = clock();
    samples[14][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm75k<<"]"<<"clock para ordenacao: "<<samples[14][i]<<endl;

    clock1 = clock();
    SelectionSort(tm80k,vector80k);
    clock2 = clock();
    samples[15][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm80k<<"]"<<"clock para ordenacao: "<<samples[15][i]<<endl;

    clock1 = clock();
    SelectionSort(tm85k,vector85k);
    clock2 = clock();
    samples[16][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm85k<<"]"<<"clock para ordenacao: "<<samples[16][i]<<endl;

    clock1 = clock();
    SelectionSort(tm90k,vector90k);
    clock2 = clock();
    samples[17][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm90k<<"]"<<"clock para ordenacao: "<<samples[17][i]<<endl;

    clock1 = clock();
    SelectionSort(tm95k,vector95k);
    clock2 = clock();
    samples[18][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm95k<<"]"<<"clock para ordenacao: "<<samples[18][i]<<endl;

    clock1 = clock();
    SelectionSort(tm100k,vector100k);
    clock2 = clock();
    samples[19][i] = (double)(clock2-clock1)/(double)CLOCKS_PER_SEC;
    cout << "Tamanho["<<tm100k<<"]"<<"clock para ordenacao: "<<samples[19][i]<<endl;
  }

  for(int i = 0; i < 20; i++){
    double sum = 0.0;
    for(int j = 0; j < 10; j++){
      sum += samples[i][j];
    }
    
    double average = sum/10.0;
    sum = 0.0;

    for(int j = 0; j < 10; j++){
      sum += pow(samples[i][j]-average, 2);
    }
    
    double variance = sum/9.0;
    double stdDeviation = sqrt(variance);

    file << NumberToString((i+1)*5000) + "  ";
    file << NumberToString(average) + "\n";
    file << NumberToString((i+1)*5000) + "  ";
    file << NumberToString(stdDeviation+average) + "\n";
    file << NumberToString((i+1)*5000) + "  ";
    file << NumberToString(average-stdDeviation) + "\n";
    file << NumberToString((i+1)*5000) + "  ";
    file << NumberToString(average) + "\n";
  }
  
  cout << endl;
  file.close();

 }