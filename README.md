# Memory-Allocator
desktop app for simulation of allocation methodologies: First and Best Fit with C++ and QT
Execuatable attached
# HIW:
\
You enter the start address and the size of the time holes, then enter the process number and the process size,
# Features:
\
### First fit: 
Button rearranges the table on the right to allocate the processes in the right place according to First fit method\
### Best fit: 
Button rearranges the table on the right to allocate the processes in the right place according to Best fit method\
### De-allocate process: 
Feature to remove a process from the processes table\
### Reset All: 
To delete and empty all tables, to start over.\
### Merge: 
This would search the holes table to look for consecutive holes\
meaning if\
hole A started at address 200 with size 125\
hole B started at address 325 with size 84\
the result is one hole C starts at address 200 with total size of 209(=125+84)   
