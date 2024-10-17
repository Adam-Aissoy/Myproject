CXX = g++
CXXFLAGS = -std=c++17 -Wall
LDFLAGS = `pkg-config --cflags --libs Qt5Widgets`
SOURCES = main.cpp mainwindow.cpp vehicle.cpp parking.cpp parking_manager.cpp
HEADERS = mainwindow.h vehicle.h parking.h parking_manager.h
OBJECTS = $(SOURCES:%.cpp=obj/%.o)
TARGET = bin/lifprojet

all: txt qt

# Compilation pour le mode texte
txt: CXXFLAGS += -DTXT_MODE
txt: $(TARGET)_txt

$(TARGET)_txt: $(OBJECTS)
    $(CXX) -o $(TARGET)_txt $(OBJECTS) $(LDFLAGS)

# Compilation pour le mode Qt
qt: $(TARGET)

$(TARGET): $(OBJECTS)
    $(CXX) -o $(TARGET) $(OBJECTS) $(LDFLAGS)

obj/%.o: %.cpp $(HEADERS)
    @mkdir -p obj
    $(CXX) $(CXXFLAGS) -c $< -o $@

clean:
    rm -f obj/*.o bin/$(TARGET) bin/$(TARGET)_txt
