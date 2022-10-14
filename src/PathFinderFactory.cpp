#include "PathFinderFactory.h"

#include "PathFinderA.h"
#include "PathFinderAstar.h"
#include "PathFinderBFS.h"
#include "PathFinderBestFirst.h"
#include "PathFinderDFS.h"
#include "PathFinderDijkstra.h"
#include <string>
IPathFinder *PathFinderFactory::Create(std::string algorithm) {
    if (algorithm == "A*")
        return new PathFinderAstar();
    if (algorithm == "A")
        return new PathFinderA();
    if (algorithm == "DFS")
        return new PathFinderDFS();
    if (algorithm == "BFS")
        return new PathFinderBFS();
    if (algorithm == "Dijkstra")
        return new PathFinderDijkstra();
    if (algorithm == "BestFirst")
        return new PathFinderBestFirst();
    return NULL;
}