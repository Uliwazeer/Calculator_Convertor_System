
#ifndef BUTTON_CFG_H_
#define BUTTON_CFG_H_

#define TOTAL_BUTTONS				3

/*Button Pin - signal input status : SIG_LOW - SIG_HIGH */
static const button_t button_arr[TOTAL_BUTTONS] = {
											{PINC4,SIG_LOW},
											{PINC5,SIG_LOW},		
											};



#endif /* BUTTON_CFG_H_ */