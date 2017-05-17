#ifndef FIBO_H
#define FIBO_H

template<class T>
T fibo( int n)
{
	const int size = 100;
	if( n < size)
	{
		static T f[ size];
		f[ 0] = f[ 1] = 1;
		int i = 0;
		for( ; i < size; i++)
		{
			if( f[ i] == 0)
				break;
		}

		while( i <= n)
		{
			f[ i] = f[ i - 1] + f[ i - 2];
			i++;
		}

		return f[ n];
	}

	return -1;
}

#endif // FIBO_H
