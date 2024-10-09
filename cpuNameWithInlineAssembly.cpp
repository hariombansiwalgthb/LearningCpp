#include<iostream>

std::string get_cpu_name()
{
	uint32_t data[4] = { 0 };
	_asm
	{
		cpuid;
		mov data[0], ebx;
		mov data[4], edx;
		mov data[8], ecx;
	}
	return std::string((const char*)data);

}
void print_cpu_name()
{
	std::cout << "CPU is : " << get_cpu_name() << std::endl;
}
int main()
{
	print_cpu_name();
	return 0;
}
