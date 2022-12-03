CXX = g++ 
CXXFLAGS = -std=c++17 -Wall -g

vis_app: vis_app.o helper.o
	$(CXX) -o vis_app vis_app.o helper.o $(CXXFLAGS)

vis_app.o: vis_app.cpp helper.h
	$(CXX) -c -o vis_app.o vis_app.cpp $(CXXFLAGS)

helper.o: helper.cpp helper.h
	$(CXX) -c -o helper.o helper.cpp $(CXXFLAGS)

clean:
	rm vis_app vis_app.o helper.o
