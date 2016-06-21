@@ -17,6 +17,13 @@ class Stack
  		void push(Element*);
  		Element* pop();
  		Stack();
 +
 +		 Element* getFirst()
 +			 {		return _first;	}
 +
 +			 Element* getLast()
 +			 {		return _last;	}
 +
  };
  
  #endif /* STACK_H_ */