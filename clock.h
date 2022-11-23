https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* Routines for timing functions */

/*  minimum resolution of timer (secs) */
extern const double timer_resolution;

/* Timer: measures in seconds */

/* Start the timer */
void start_timer();

/* Get # seconds since timer started.  Returns 1e20 if detect timing anomaly */
double get_timer();

/* Determine clock rate of processor (using a default sleeptime) */
double mhz(int verbose);

/* Counter: measures in clock cycles */
/* Start the counter */
void start_counter();

/* Get # cycles since counter started.  Returns 1e20 if detect timing anomaly */
double get_counter();
