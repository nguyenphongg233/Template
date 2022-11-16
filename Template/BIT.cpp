struct BIT{
	int bit[MAX];
	int n;
	void update(int id,int val){
		for(;id <= n;id += id & -id)bit[id] += val;
	}
	int get(int id,int val){
		int sum = 0;
		for(;id > 0;id -= id & -id)sum += bit[id];
		return sum;
	}
	int getr(int l,int r){
		return get(r) - get(l - 1);
	}
	void updater(int l,int r){
		update(l - 1,-val);
		update(r,val);
	}
};