```docker build -t my-gcc-app . ```

Share your current folder with your docker 
```docker run -it -v "$PWD":/host my-gcc-app```

Open mpi test : 
```cd /host```

```mpic++ <name of your cpp file>```

```mpirun --allow-run-as-root ./a.out``` (because you are root on docker) TODO : create user and give correct permissions etc (Flemme)

To run with multiple threads :
``` mpirun --allow-run-as-root -n 4 ./a.out```
