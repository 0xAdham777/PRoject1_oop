#include <iostream>
#include <string>

using namespace std;

class clsCalculater
{
private:

	int _MainCalcu = 0;
	int _TempMainCalcu_Operator = 0;
	int _Operator = 0;
	string _arr_Operator_To_Srting[5] = { " Adding " ," Subtract " ," Dividing "," Multiplay "," Clear "};
	
public:

	void Add(int NumberAdd)
	{
		_TempMainCalcu_Operator = NumberAdd;
		_Operator = 0;
		_MainCalcu += NumberAdd;
	}

	void Subtract(int NumberSubtract)
	{
		_TempMainCalcu_Operator = NumberSubtract;
		_Operator = 1;
		_MainCalcu -= NumberSubtract;
	}

	void Dividing(int NumberDividing)
	{
		_Operator = 2;
		if ((NumberDividing == 0))
		{
			_TempMainCalcu_Operator = 1;
		}
		else
		{
		    _TempMainCalcu_Operator = NumberDividing;
			_MainCalcu /= NumberDividing;
		}
	}

	void Multiplay(int NumberMultiplay)
	{
		_Operator = 3;
		_TempMainCalcu_Operator = NumberMultiplay;
		_MainCalcu *= NumberMultiplay;
	}

	void Clear()
	{
		_TempMainCalcu_Operator = 0;
		_MainCalcu = 0;
		_Operator = 4;
	}

	void PrintResult()
	{
		cout << "Result After " << _arr_Operator_To_Srting[_Operator]
		 << _TempMainCalcu_Operator << " is : " << _MainCalcu << endl;
	}
};

int main()
{
	clsCalculater Calculater1;
	system("pause>0");
	return 0;
}