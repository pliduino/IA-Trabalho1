#include <list>
#include <string>

#pragma once

struct Node {
  public:
    int index;
    double weight;
    Node *path;

    Node() {
        index = -1;
        weight = -1;
    }

    virtual ~Node(){};

    Node(int _index, double _weight) {
        index = _index;
        weight = _weight;
        path = NULL;
    }

    Node(int _index, double _weight, Node *_path) {
        index = _index;
        weight = _weight;
        path = _path;
    }

    Node *SetValues(double _weight, Node *_path) {
        weight = _weight;
        path = _path;
        return this;
    }
};