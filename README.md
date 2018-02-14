# Installation

Clone or download the project.
Open a terminal _in this folder_.

Run
```docker build -t my-gcc-app . ``` to build the docker. It will automatically install MPI.

# Running

Run docker. It will share the current folder with the docker instance in `/host`: put your code here. 

```docker run -it -v "$PWD":/host my-gcc-app```

Then go in the shared folder:

```cd /host```

## MPI 

If you do not choose the name of your output file, it will be by default a.out 
```mpic++ <name of your cpp file>```

To choose your output file : (`-o` allows you to specifiy your output file )
```mpic++ -o <name of output file> <name of your cpp file> ```

```mpirun --allow-run-as-root ./a.out``` or ```mpirun --allow-run-as-root <name of output file>```
(because you are root on docker) TODO : create user and give correct permissions etc.

To run with multiple threads :
``` mpirun --allow-run-as-root -n 4 ./a.out``` or ```mpirun --allow-run-as-root <name of output file>```

## OpenMP

```g++ -fopenmp <name of your cpp file>```

then

```./a.out```
