# OPJA177

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Multithreading Programming Problem

Here is an example to demonstrate the use of multi-threading to run two separate threads concurrently, each performing a simple task. Let's break down the code step by step:

- Two Thread Function Classes: ThreadFunction1 and ThreadFunction2 are two classes that implement the Runnable interface. This means they define a run method that represents the code to be executed by separate threads.
- run Method: Inside both ThreadFunction1 and ThreadFunction2, there is a run method that runs a loop five times. Within the loop, there's a call to Thread.sleep(10) which makes the current thread sleep for 10 milliseconds. This is used to simulate a small delay. After the sleep, a message is printed indicating the thread number and the current loop iteration.
- Main Class - Codechef: In the Codechef class, the main method is defined, which serves as the entry point for the program.
- Thread Creation: Two threads, t1 and t2, are created and initialized with instances of ThreadFunction1 and ThreadFunction2 respectively. This prepares the threads to execute the code defined in their respective run methods.
- Thread Start: t1.start() and t2.start() are used to start both threads. This effectively begins the execution of the code defined in the run methods of ThreadFunction1 and ThreadFunction2. They run concurrently, allowing both threads to execute their code simultaneously.
- Thread Join: After starting the threads, the main thread (the one running the main method) calls t1.join() and t2.join(). These calls make the main thread wait for t1 and t2 to finish their execution. This ensures that "Main thread: Done!" is only printed after both t1 and t2 have completed their tasks.
- "Main thread: Done!": Once both t1 and t2 have finished their execution (due to the join method), the main thread prints "Main thread: Done!" to indicate the end of the program.
### Task

Execute this code to see how Multithreading works in Java.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T06:58:35.771Z  

```java
class ThreadFunction1 implements Runnable {
    @Override
    public void run() {
        for (int i = 0; i < 5; ++i) {
            try {
                Thread.sleep(10); // Sleep for 10 milliseconds
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println("Thread 1: " + i);
        }
    }
}


class ThreadFunction2 implements Runnable {
    @Override
    public void run() {
        for (int i = 0; i < 5; ++i) {
            try {
                Thread.sleep(10); // Sleep for 10 milliseconds
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println("Thread 2: " + i);
        }
    }
}


class Codechef {
    public static void main(String[] args) {
        Thread t1 = new Thread(new ThreadFunction1());
        Thread t2 = new Thread(new ThreadFunction2());
        t1.start();
        t2.start();
        try {
            t1.join(); // Wait for t1 to finish
            t2.join(); // Wait for t2 to finish
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("Main thread: Done!");
    }
}


```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA177)