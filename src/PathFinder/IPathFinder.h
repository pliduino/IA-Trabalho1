#include "Graph/Graph.h"
#include "Graph/Node.h"

#pragma once

class IPathFinder {
  public:
    virtual ~IPathFinder(){};
    virtual std::vector<Node> *FindPath(Graph graph, int startVertice,
                                        int endVertice) = 0;
};