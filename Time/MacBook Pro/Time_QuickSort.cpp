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

void QuickSort(int vector[], int left, int right){
  int p = left,ch,j;

  for(int i = left + 1; i <= right; i++){
    j = i;

    if(vector[j] < vector[p]){
      ch = vector[j];
      
      while(j > p){    
        vector[j] = vector[j-1];
        j--;
      }
      
      vector[j] = ch;
      p++;
    } 
  }

  if(p-1 > left){
    QuickSort(vector,left,p-1);
  }

  if(p+1 < right){
    QuickSort(vector,p+1,right);
  }
}

template <typename T>
string NumberToString(T number){
  ostringstream temp;
  temp << number;
  return temp.str();
}

int main(void){

  // variáveis para calcular time
  time_t time1,time2;

  int samples[20][10];

  ofstream file;
  file.open("Time_QuickSort.dat");

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

    cout << "-- QuickSort --" << endl;
    time1 = time(NULL);
    QuickSort(vector5k,0,tm5k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm5k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[0][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector10k,0,tm10k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm10k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[1][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector15k,0,tm15k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm15k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[2][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector20k,0,tm20k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm20k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[3][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector25k,0,tm25k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm25k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[4][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector30k,0,tm30k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm30k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[5][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector35k,0,tm35k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm35k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[6][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector40k,0,tm40k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm40k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[7][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector45k,0,tm45k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm45k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[8][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector50k,0,tm50k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm50k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[9][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector55k,0,tm55k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm55k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[10][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector60k,0,tm60k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm60k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[11][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector65k,0,tm65k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm65k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[12][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector70k,0,tm70k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm70k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[13][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector75k,0,tm75k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm75k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[14][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector80k,0,tm80k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm80k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[15][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector85k,0,tm85k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm85k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[16][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector90k,0,tm90k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm90k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[17][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector95k,0,tm95k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm95k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[18][i] = time2-time1;

    time1 = time(NULL);
    QuickSort(vector100k,0,tm100k);
    time2 = time(NULL);
    cout << "Tamanho["<<tm100k<<"]"<<"time para ordenacao: "<<time2-time1<<endl;
    samples[19][i] = time2-time1;
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