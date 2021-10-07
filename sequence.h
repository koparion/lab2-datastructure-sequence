
//Lab 2
#pragma once
#ifndef SEQUENCE_H
#define SEQUENCE_H

using namespace std;

template <class value_type> 
	class sequence
	{
	private:
		value_type* data;
		int num_used;
		int capacity;
		void helper()
		{
			value_type* newData = new value_type[capacity];
			for (int i = 0; i < capacity; i++)
			{
				newData[i] = data[i];
			}
			data = new value_type[capacity * 2];
			for (int i = 0; i < capacity; i++)
			{
				data[i] = newData[i];
			}
			delete[] newData;
		}
	public:
		//default constructor
		sequence() { 
			capacity = 10; 
			data = new value_type[capacity];
			num_used = 0; 
		}
		//constructor
		sequence(int size){
			capacity = size;
			num_used = 0;
			data = new int[capacity];
		}
		//destructor
		~sequence() { delete[] data; }
		//method to determine if full
		bool full() const
		{
			if (num_used == capacity)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		//method to determine if empty
		bool empty()const
		{
			if (num_used != 0)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		int num_element()const
		{
			return num_used;
		}
		int max_capacity()const
		{
			return capacity;
		}
		//method to return an element at given position
		value_type at(int position) const
		{
			for (int i = 0; i < num_used; i++)
			{
				//arr[i];
				if (data[i] == position)
				{
					return data[i];
				}
			}
		}
		// method to overwrite an element at given position
		void set(const value_type& entry, int position)
		{
			if (position > num_used + 1)
			{
				//checking for error
				assert(position < num_used && "invalid input");
			}
			else
			{
				//adding entry by overwriting
				data[position] = entry;
			}
		}
		//method to insert an element at a given position in the array
		void insert(const value_type& entry, int position)
		{
			// checking if full then expand capacity function
			if (full())
			{
				helper();
			}
			if (position < 0) //checking for validity of position
			{
				//assert(position > 0 && "invalid input");
				cout << "Invalid Input\nStart Over\n";
			}
			else if(position > 0)
			{
				// shift elements forward
				for (int i = num_used++; i >= position; i--)
				{
					data[i] = data[i - 1];
				}
				//adding entry at position shifting elements position to right
				data[position] = entry;
			}
		}
		//method to add an element to end of array
		void push_back(const value_type & entry)
		{
			//checking if full then use helper function to get more capacity
			if (full())
			{
				helper();
			}
			data[num_used] = entry;
			num_used++;
		}
		//method to remove an element from a given position in the array.
		void remove(int position)
		{
			//checking if there are elements in array first
			if (empty())
			{
				cout << "There are no Elements\n";
				return;
			}
			for (int i = position; i < num_used; i++)
			{
				data[i] = data[i+1];
			}
			num_used--;
			cout << "Element deleted\n";
		}
		//method to print elements
		void print()const
		{
			cout << "Displaying element: \n";
			for (int i = 0; i < num_used; i++)
			{
				cout << "Position: "<< i << " Value: " << data[i] << endl;
			}
		}
		
	};
	#endif
		