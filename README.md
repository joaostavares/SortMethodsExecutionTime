<div>
  <p>
    <img src= "https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white"/>
    <img src= "https://img.shields.io/badge/CMake-%23008FBA.svg?style=for-the-badge&logo=cmake&logoColor=white"/>
  </p>
</div>
# Execution Time for Sort Methods in C++

A simple project in c++ that generates arrays with random values and executes some sort methods counting the execution time in milliseconds. <br>

**Sort methods executed in code:**<br>
* Bubble Sort
* Selection Sort
* Insertion Sort
* Merge Sort
* Quick Sort
* Heap Sort

## Build process in linux: 
*(in windows i used CLion to run and test, but any other ide should work)*  <br> <br>

### Requirements: <br>

CMake *( 3.22 or newer )*
<br> or <br>
G++ *( Usually installed with the command: `sudo apt-get install -y build-essential` )* <br> <br>


### CMake: <br>

After cloning the project, access the folder in the console, create a build directory and access it:

`mkdir build`

`cd build`

and run the CMake command:

`cmake ../`

build:

`cmake --build .`

run:

`./SortMethodsExecutionTime`

<br>

### g++: <br>

In project folder, run build command:

`g++ *.cpp -o exec`

then run:

`./exec`


<br> <br>
*Obs.: Main code was written to run fast and display the results, if you want longer tests you can change the value on line 17 of `main.cpp` (remember to put a multiple of 10 in the value) but I really recommend you comment out lines 19 to 39 unless you wanna spend some hours running the less optimized methods.*
