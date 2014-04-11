void swap(int &a, int &b) {
	//a^=b^=a^=b;
	//异或交换两个数
	//会使相同的两个数变为0
	//所以要先判断a与b是否相等
	if (a-b) a^=b^=a^=b;
}
