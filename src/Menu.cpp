void Menu::listItems()
  {

 	cout << "lista de  libros " << endl;
      Stack* stack = new Stack();
      Element* i = _stack -> pop();
          while(i != NULL)
  			{
  				 cout << i->getName() << "\t" << i->getAuthor() << "\t" << i-> getPublisher()<< "\t" << i->getDate() << "\t" << i->getCategory() << endl;
  				 i = _stack->pop();
  			}
  	//cout << "List Book" << endl;
  }
  Stack* _stack = new Stack();

  void Menu::addItems()
  {
      std::string name, author, publisher, date, category;

  	cout <<"Deposita el nombre : "<<endl;
  	cin>>name;

  	cout <<"Escribe el nombre del autor:"<<endl;
  	cin>>author;

 	cout << "Agrega un libro" << endl;
  	cout<<"Escribe quien lo  Publico: "<<endl;
  	cin>>publisher;

  	cout <<"Deposita la fecha de publicacion: "<< endl;
  	cin>>date;

  	cout <<"categoria del libro : "<<endl;
  	cin>>category;

  	Element* book = new Element(name, author , publisher,date,category);

  	 _stack->push(book);
  	//cout << "Add Book" << endl;
  }

  void Menu::requestLastBook()
  {
 	cout << "Solicitar un Libro"<< endl;
      Element* i = _stack -> pop();
  			while(i != NULL)
  			{
  			 cout << i->getName() << "\t" << i->getAuthor() << "\t" << i-> getPublisher()<< "\t" << i->getDate() << "\t" << i->getCategory() << endl;
  					 i = _stack->pop();
  				}
  	//cout << "Request a Book"<< endl;
  }

  void Menu::searchByCategory()
