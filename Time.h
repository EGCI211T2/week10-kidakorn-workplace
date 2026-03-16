struct Time{
	int m,h,s;
};

void getTime(struct Time &t);
struct Time subtract(struct Time t1, struct Time t2);
void display(struct Time t);



	void getTime(struct Time &t){
	cout << "Enter time:(hh:mm:ss) " << endl;
	cin >> t.h >> t.m >> t.s;
}	

void display(struct Time t){
	cout << "Time is: " << t.h << ":" << t.m << ":" << t.s << endl;
}	


	struct Time subtract(struct Time t1, struct Time t2){
	struct Time result;
	int totalSeconds1 = t1.h * 3600 + t1.m * 60 + t1.s;
	int totalSeconds2 = t2.h * 3600 + t2.m * 60 + t2.s;
	int diffSeconds = (totalSeconds2 - totalSeconds1);
	if(diffSeconds < 0){
		diffSeconds = 86400 + diffSeconds; //24*60*60
	}
	result.h = diffSeconds / 3600;
	diffSeconds %= 3600;
	result.m = diffSeconds / 60;
	result.s = diffSeconds % 60;
	display(result);
	return result;
}
//create 3 functions

//1.  getTime function
//2. subtract fuctions
//3. display functions