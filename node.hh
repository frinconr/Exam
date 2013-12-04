#include <utility>
#include <list>
#include <iostream>

using namespace std;

#ifndef NODE_H
#define NODE_H

template <class T, class N>
class node{
	
	list <pair <T,N> > vortex;
	
	node* father;	
	
	public:
	
		node();
		~node();
		void add_tuple(T key ,N value);
		void print_tuple();
		//iterator get_vort_it();
};

#endif

template<class T, class N>
node<T,N>::node(){

	}
template<class T, class N>
node<T,N>::~node(){

	}

template<class T, class N>
void node<T,N>::add_tuple(T key, N value){
	
	pair<T,N> tuple (key,value);

	vortex.push_back(tuple);

	}


template<class T, class N>
void node<T,N>::print_tuple(){
	
	typename list<pair<T, N> >::iterator init_iter = this->vortex.begin();
	typename list<pair<T, N> >::iterator end_iter = this->vortex.end();
	
	pair<T,N> dup;
	
	while(init_iter!=end_iter)
	{
		dup=*init_iter;	
		cout<<"("<<dup.first<<","<<dup.second<<")    ";
		++init_iter;
	}
	
	cout<<endl;
}


