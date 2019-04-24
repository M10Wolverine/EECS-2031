/***************************************
* EECS2031Z Lab3 *
* Filename: function *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/

/*Define global variables*/
int sum;
int count;
int input;
double resu;

/*Global function to get average*/
void runningAverage(void)
{
	sum=sum+input;
	count++;
	resu = sum/(double)count;
}
