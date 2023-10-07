#define SUN 0
#define MON 1
#define TUE 2
#define WED 3
#define THI 4
#define FRD 5
#define SAT 6

int is_leap(int year);
int month_days(int month, int year);
int julian_day(int day, int month, int year);
int ndow(int day, int month, int year);
void print_dow(int day, int month, int year);

