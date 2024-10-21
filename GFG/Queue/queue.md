# Queue
---
  - ### Queue is a linear data structure.
  - ### Queue works on first in first out principal.
  - ### Ex.
      line of consumers for a resource where the consumer who came first is serverd first.
---
  - ### Operations on Queue
      - ### Enqueue:
        - Add an item to the queue.
        - If queue is full then it said to be an overflow condition.

      - ### Dequeue:
        - Removes an item from the queue.
        - The items are popped in the same order in which they are pushed.
        - If the  queue is empty, then it is said to be an underflow condition.
        
      - ### Front:
        -  Get the front item from queue.

      - ### Rear:
        - Get the last item from queue.
---
  - ### Time Complexity:
    - Enqueue :- O(1)
    - Dequeue :- O(1)
    - Front   :- O(1)
    - Rear    :- O(1)
    - isFull():- O(1)
    - isEmpty():-O(1)
---
  - ### Applications of Queue:-
    Queue is used when things don't have to be processed immediatly, but have to be processed in First in First out order.
    
    1. Breadth First Search
       
    2. When a resource is shared among multiple consumers.
         ex. CPU Scheduling, Disk Scheduling.

    3. When data is transferred asynchonously (data not necessarily received at same rate as sent) between two processes.
       ex. IO Buffers, Pipes, file IO, etc.
