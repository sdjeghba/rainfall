class	Number
{
	private:
		int		number;
		char	buffer[100];

	public:
		Number(int x) : number(x) {}
		void setAnnotation(char *str) {
			memcpy(buffer, str, strlen(str));
		}
		virtual int operator+(Number &otherCL){
			return number + otherCL.number;
		}
		virtual int operator-(Number &otherCL){
			return number - otherCL.number;
		}
}

int		main(int ac, char **av)
{
	if (ac < 2)
		exit(1);
	Number *first = new Number(5);
	Number *second = new Number(6);
	Number &tmp1 = *first;
	Number &tmp2 = *second;

	tmp1.setAnnotation(av[1]);
	return tmp1 + tmp2;
}
