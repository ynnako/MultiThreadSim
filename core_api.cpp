/* 046267 Computer Architecture - Spring 2019 - HW #4 */

#include "core_api.h"
#include "sim_api.h"

#include <stdio.h>

int num_of_threads = 0;
int num_of_threads = 0;
int blocked_time = 0;
int fined_time = 0;
int *thread_regs[REGS];


Status Core_blocked_Multithreading(){
	return Success;
}


Status Core_fineGrained_Multithreading(){

	return Success;
}


double Core_finegrained_CPI(){
	return 0;
}
double Core_blocked_CPI(){
	return 0;
}

Status Core_blocked_context(tcontext* bcontext,int threadid){
	return Success;
}

Status Core_finegrained_context(tcontext* finegrained_context,int threadid){
	return Success;
}
