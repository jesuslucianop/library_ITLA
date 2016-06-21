void Menu::listItems()
  {
 -
 -	cout << "List Book" << endl;
 +    Stack* stack = new Stack();
 +    Element* i = _stack -> pop();
 +        while(i != NULL)
 +			{
 +				 cout << i->getName() << "\t" << i->getAuthor() << "\t" << i-> getPublisher()<< "\t" << i->getDate() << "\t" << i->getCategory() << endl;
 +				 i = _stack->pop();
 +			}
 +	//cout << "List Book" << endl;
  }
 +Stack* _stack = new Stack();
  
  void Menu::addItems()
  {
 +    std::string name, author, publisher, date, category;
 +
 +	cout <<"Write book's name: "<<endl;
 +	cin>>name;
 +
 +	cout <<"Write Author's name:"<<endl;
 +	cin>>author;
  
 -	cout << "Add Book" << endl;
 +	cout<<"Write Publisher: "<<endl;
 +	cin>>publisher;
 +
 +	cout <<"Write published date: "<< endl;
 +	cin>>date;
 +
 +	cout <<"Write category: "<<endl;
 +	cin>>category;
 +
 +	Element* book = new Element(name, author , publisher,date,category);
 +
 +	 _stack->push(book);
 +	//cout << "Add Book" << endl;
  }
  
  void Menu::requestLastBook()
  {
 -	cout << "Request a Book"<< endl;
 +    Element* i = _stack -> pop();
 +			while(i != NULL)
 +			{
 +			 cout << i->getName() << "\t" << i->getAuthor() << "\t" << i-> getPublisher()<< "\t" << i->getDate() << "\t" << i->getCategory() << endl;
 +					 i = _stack->pop();
 +				}
 +	//cout << "Request a Book"<< endl;
  }
  
  void Menu::searchByCategory()