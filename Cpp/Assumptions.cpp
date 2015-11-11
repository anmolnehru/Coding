Assumptions:-

The given user ID has O(n) first level connections and each connection has O(n) connections in return(possibly overlapping)

Complexity analysis:-

Steps:-

1) Generating first level connections - constant time. (Single API call) 
2) Generating 2nd level connections  - O(n). (n users * constant time first level connections for each one). Let's call the total set 'friends'.
3) Finding unique friends - O(n). (Known to be linear from STL)
4) Worst case scenario of unique friends = O(n^2). //Very friendly user :)
5) For each distinct 'friend', constant time to enumerate course IDs=> c * O(n^2)
6) Sorting over n^2 entities = n^2(log(n^2)) = O(n^2log(n)). //Heap sort? Not sure what STL uses for this
7) Returning the list- constant time.



Hence overall Complexity = O(n^2log(n))


