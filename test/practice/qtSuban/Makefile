CXX=g++
LFLAGS        = -m64
CXXFLAGS      = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/home/mayanksingh2298/Qt/5.10.1/gcc_64 -I. -I/home/mayanksingh2298/Qt/5.10.1/gcc_64/include/QtCore -I/home/mayanksingh2298/Qt/5.10.1/gcc_64/include/QtGui -I/home/mayanksingh2298/Qt/5.10.1 -I.
LIBS          = -L/usr/lib/x86_64-linux-gnu/ -lm -lQtGui
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB
OBJECTS       = main.o
TARGET        = draw

%.o: %.cpp
	$(CXX) -c $< $(CXXFLAGS) $(INCPATH)

$(TARGET):  $(OBJECTS)  
	$(CXX) $(LFLAGS) -o $@ $^ $(LIBS)

.PHONY: clean

clean: 
	rm -f *.o $(TARGET)
