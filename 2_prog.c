#include<stdio.h>
#include<limits.h>
#include<unistd.h>
int main()
{
    printf("_POSIX_VERSION constant: %ld\n",_POSIX_VERSION);
    #ifdef _POSIX_ASYNCHRONOUS_IO
    printf("posix asynchronous i/o supported\n");
    #endif
    #ifdef _POSIX_BARRIERS
    printf("posix barriers supported");
    #endif
    #ifdef _POSIX_CHOWN_RESTRICTED
    printf("posix chown restricted");
    #endif
    #ifdef _POSIX_CLOCK_SELECTION
    printf("posix clock selection supported");
    #endif
    #ifdef _POSIX_CPUTIME
    printf("posix CPU Time supported\n");
    #endif
    #ifdef _POSIX_FSYNC
    printf("posix Fsync supported\n");
    #endif
    #ifdef _POSIX_IPV6
    printf("posix IPv6 supported\n");
    #endif
    #ifdef _POSIX_JOB_CONTROL
    printf("posix Job Control supported\n");
    #endif
    #ifdef _POSIX_MAPPED_FILES
    printf("posix Mapped Files supported\n");
    #endif
    #ifdef _POSIX_MEMLOCK
    printf("posix Memlock supported\n");
    #endif
    #ifdef _POSIX_MEMLOCK_RANGE
    printf("posix Memlock Range supported\n");
    #endif
    #ifdef _POSIX_MEMORY_PROTECTION
    printf("posix Memory Protection supported\n");
    #endif
    #ifdef _POSIX_MESSAGE_PASSING
    printf("posix Message Passing supported\n");
    #endif
    #ifdef _POSIX_MONOTONIC_CLOCK
    printf("posix Monotonic Clock supported\n");
    #endif
    #ifdef _POSIX_NO_TRUNC
    printf("posix No Truncation supported\n");
    #endif
    #ifdef _POSIX_PRIORITIZED_IO
    printf("posix Prioritized I/O supported\n");
    #endif
    #ifdef _POSIX_PRIORITY_SCHEDULING
    printf("posix Priority Scheduling supported\n");
    #endif
    #ifdef _POSIX_RAW_SOCKETS
    printf("posix Raw Sockets supported\n");
    #endif
    #ifdef _POSIX_REALTIME_SIGNALS
    printf("posix Real-time Signals supported\n");
    #endif
    #ifdef _POSIX_SAVED_IDS
    printf("posix saved ids supported\n");
    #endif
    #ifdef _POSIX_SEMAPHORES
    printf("POSIX Semaphores supported\n");
    #endif
    #ifdef _POSIX_SHARED_MEMORY_OBJECTS
    printf("POSIX Shared Memory Objects supported\n");
    #endif
    #ifdef _POSIX_SHELL
    printf("POSIX Shell supported\n");
    #endif
    #ifdef _POSIX_SPAWN
    printf("POSIX Spawn supported\n");
    #endif
    #ifdef _POSIX_SPIN_LOCKS
    printf("POSIX Spin Locks supported\n");
    #endif
    #ifdef _POSIX_SPORADIC_SERVER
    printf("POSIX Sporadic Server supported\n");
    #endif
    #ifdef _POSIX_SYNCHRONIZED_IO
    printf("POSIX Synchronized I/O supported\n");
    #endif
    #ifdef _POSIX_THREAD_ATTR_STACKADDR
    printf("POSIX Thread Attribute Stack Address supported\n");
    #endif
    #ifdef _POSIX_THREAD_ATTR_STACKSIZE
    printf("POSIX Thread Attribute Stack Size supported\n");
    #endif
    #ifdef _POSIX_THREAD_CPUTIME
    printf("POSIX Thread CPU Time supported\n");
    #endif
    #ifdef _POSIX_THREAD_PRIO_INHERIT
    printf("POSIX Thread Priority Inheritance supported\n");
    #endif
    #ifdef _POSIX_THREAD_PRIO_PROTECT
    printf("POSIX Thread Priority Protect supported\n");
    #endif
    #ifdef _POSIX_THREAD_PRIORITY_SCHEDULING
    printf("POSIX Thread Priority Scheduling supported\n");
    #endif
    #ifdef _POSIX_THREAD_PROCESS_SHARED
    printf("POSIX Thread Process Shared supported\n");
    #endif
    #ifdef _POSIX_THREAD_ROBUST_PRIO_INHERIT
    printf("POSIX Thread Robust Priority Inheritance supported\n");
    #endif
    #ifdef _POSIX_THREAD_ROBUST_PRIO_PROTECT
    printf("POSIX Thread Robust Priority Protect supported\n");
    #endif
    #ifdef _POSIX_THREAD_SAFE_FUNCTIONS
    printf("POSIX Thread Safe Functions supported\n");
    #endif
    #ifdef _POSIX_THREAD_SPORADIC_SERVER
    printf("POSIX Thread Sporadic Server supported\n");
    #endif
    #ifdef _POSIX_THREADS
    printf("POSIX Threads supported\n");
    #endif
    #ifdef _POSIX_TIMEOUTS
    printf("POSIX Timeouts supported\n");
    #endif
    #ifdef _POSIX_TIMERS
    printf("POSIX Timers supported\n");
    #endif
    #ifdef _POSIX_TRACE
    printf("POSIX Trace supported\n");
    #endif
    #ifdef _POSIX_TYPED_MEMORY_OBJECTS
    printf("POSIX Typed Memory Objects supported\n");
    #endif
    #ifdef _POSIX_VDISABLE
    printf("POSIX VDISABLE supported\n");
    #endif
    return 0;
}
