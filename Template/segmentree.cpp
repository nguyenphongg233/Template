struct Segment_Tree{
	int st[MAX];
	int lazy[MAX];
	
	int combine(int x,int y){
		// dosth
	}
	void dosth(){
		//dosth
	}
	void lazyupdate(int id,int l,int r){
		if(lazy[id]){
			st[id] += lazy[id];
			lazy[id << 1] += lazy[id];
			lazy[id << 1 | 1] += lazy[id];
			lazy[id] = 0;
		}
	}
	
	void update(int id,int l,int r,int u,int v,int val){
		if(u > r || v < l)return;
		if(u <= l && v >= r){
			dosth();
			return;
		}
		
		int m = l + r >> 1;
		update(id << 1,l,m,u,v,val);
		update(id << 1 | 1,m + 1,r,u,v,val);
		
		st[id] = combine(st[id << 1],st[id << 1 | 1]);
	}
	
	int get(int id,int l,int r,int u,int v){
		if(u > r || v < l)return 0;
		if(u <= l && v >= r)return st[id];
		
		int m = l + r >> 1;
		combine(get(id << 1,l,m,u,v),get(id << 1 | 1,m + 1,r,u,v));
	}
};
