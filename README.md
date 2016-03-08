# Performance differences between x86 (MacBook Pro) and ARM (BeagleBone Black)

## Installation
***
First you need to install the Debian on a MicroSD Card to work with the BeagleBone Black. Follow these steps to do the installation.

- Open the Terminal and run "wget https://rcn-ee.com/rootfs/2016-02-11/elinux/debian-8.3-console-armhf-2016-02-11.tar.xz" to download the Debian Jessie.
- Unpack it writing "tar xf debian-8.3-console-armhf-2016-02-11.tar.xz".
- Enter on the folder with the Debian, using "cd debian-8.3-console-armhf-2016-02-11".
- Insert your MicroSD Card on your computer.
- Identify it running "sudo ./setup_sdcard.sh --probe-mmc" (you need to put your root password).
- You will see the ID of your MicroSD Card on the first column, it is a code like "mmcblk0" or "sdb1", you can check looking at the column with the size of your MicroSD Card. Take note of this number.
- Run this following code changing the "mmcblk0" for your MicroSD Card ID that you noted "sudo ./setup_sdcard.sh --mmc /dev/mmcblk0 --dtb beaglebone".
- The instalation will take a few minutes.
- With the Debian on your MicroSD Card you need to insert it on the BeagleBone Black.
- Now connect the board on your computer pressing the Boot button until the 4 LEDs shine.
- Run on the Terminal this code "ssh debian@192.168.7.2" (the password is 'temppwd').

Now you can access the Debian Jessie Operational System on your board.

## Cross-compiling
***
To run C++ codes on BeagleBone Black you will need a cross-compiler to generate the binary code for ARM.
On the Terminal, write this code "sudo apt-get install g++-arm-linux-gnueabihf".

To generate the binary ARM you need to go to the directory of your code on your computer writing this code "cd /your_directory".
Now run the following command "arm-linux-gnueabihf-g++ -o program_name program_code.cpp"
If your compilation was succeeded, you can send the binary ARM to the BeagleBone Black. Run this command "sshpass -p 'temppwd' scp program_name debian@192.168.7.2:~"

Now you can run the code on BeagleBone Black. Enter on your board Operational System and run the app using "./program_name"

## Testing the algorithms
***
Compile the codes on Git, run them on BeagleBone Black and copy the .dat files to your computer using a USB stick:

- Insert an USB stick on BeagleBone Black.
- On BeagleBone Black, run "sudo su" (the password is 'temppwd') and "mount /dev/sdb1 /media".
- Now write this command "exit", to get out of root.
- Move the .dat files to the USB stick with this command "mv dat_file.dat /media".
- Write this command to remove the USB stick with safety "sudo su" and "umount /media".

Put the USB stick on your computer and plot the values using GNUPLOT.

## GNUPLOT
***
To install the GNUPLOT you just need to open the Terminal and write "sudo apt-get install gnuplot-x11".

Now you can plot the algorithm's values just put "gnuplot" on the terminal and follow these commands to plot your values <http://www.dicas-l.com.br/arquivo/usando_gnuplot_para_gerar_bons_graficos.php>

## Analysis
***
It was done some tests with these algorithms and was generated 4 graphics, here they are:

### Time function on BBB

![Time](Time/BBB/plot.png?raw=true "Time function graphic")

### Time function on MacBook Pro i5

![Time](Time/MacBook Pro/plot.png?raw=true "Time function graphic")

### Clock function on BBB

![Clock](Clock/BBB/plot.png?raw=true "Clock function graphic")

### Clock function on MacBook Pro i5

![Clock](Clock/MacBook Pro/plot.png?raw=true "Clock function graphic")