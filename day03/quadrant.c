//There is no magic. But there are wonders.
//ifotmation can be downloaded, understanding can't be.
//underastanding can be developed by analysis.
//for analysis u should be sceptical.

//Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
//which the point lies. Check for special cases point lies on ± x axis, ±y axis, origin

#include <stdio.h>
#include <stdlib.h>

#define XGTZPOS 0
#define XLTZPOS 1
#define XEQZPOS 2
#define YGTZPOS 3
#define YLTZPOS 4
#define YEQZPOS 5

#define XGTZMASK (1 << XGTZPOS)
#define XLTZMASK (1 << XLTZPOS)
#define XEQZMASK (1 << XEQZPOS)
#define YGTZMASK (1 << YGTZPOS)
#define YLTZMASK (1 << YLTZPOS)
#define YEQZMASK (1 << YEQZPOS)

#define QDI		XGTZMASK | YGTZMASK
#define QDII	XLTZMASK | YGTZMASK
#define QDIII	XLTZMASK | YLTZMASK
#define QDIV	XGTZMASK | YLTZMASK
#define PXAX	XGTZMASK | YEQZMASK
#define NXAX	XLTZMASK | YEQZMASK
#define PYAX	XEQZMASK | YGTZMASK
#define NYAX	XEQZMASK | YLTZMASK
#define ORGN	XEQZMASK | YEQZMASK

int main(int argc, char *argv[])
{
	int xv[] ={3, -9, 0};	
	int yv[] ={6, -12, 0};	
	int x;
	int y;
	int i;
	int j;
	int result;

	for(i = 0; i < 3; ++i)
	{
		for(j = 0; j < 3; ++j)
		{
			x = xv[i];
			y = yv[j];
			fprintf(stdout, "point(%d, %d) lies ", x, y);

			//process data
			result = 0;
			result |= (x > 0) << XGTZPOS;
			result |= (x < 0) << XLTZPOS;
			result |= (x == 0) << XEQZPOS;
			result |= (y > 0) << YGTZPOS;
			result |= (y < 0) << YLTZPOS;
			result |= (y == 0) << YEQZPOS;
			
			switch(result)
			{
				case QDI:
					fprintf(stdout, "in Quadrent I");
					break;
				case QDII:
					fprintf(stdout, "in Quadrent II");
					break;
				case QDIII:
					fprintf(stdout, "in Quadrent III");
					break;
				case QDIV:
					fprintf(stdout, "in Quadrent IV");
					break;
				case PXAX:
					fprintf(stdout, "on +ve x axis");
					break;
				case NXAX:
					fprintf(stdout, "on -ve x axis");
					break;
				case PYAX:
					fprintf(stdout, "on +ve y axis");
					break;
				case NYAX:
					fprintf(stdout, "on -ve y axis");
					break;
				case ORGN:
					fprintf(stdout, "on origin");
					break;
			}

			fprintf(stdout, "\n");
		}
	}
	//exit main
	exit(0);
}

