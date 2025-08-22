/* Author: Ali Golestaneh and Constantinos Chamzas */
#include "DiskSampler.h"

bool isStateValid(const ob::State *state) {

    // cast the abstract state type to the type we expect
    const auto *r2state = state->as<ob::RealVectorStateSpace::StateType>();
    double x = r2state->values[0];
    double y = r2state->values[1];
    // A square obstacle with and edge of size 2*sqrt(2) is located in location [-3,-2,] and rotated pi/4 degrees around its center.
    // Fill out this function that returns False when the state is inside/or the obstacle and True otherwise// 

    // ******* START OF YOUR CODE HERE *******//

    return true;

    // ******* END OF YOUR CODE HERE *******//
}


bool DiskSampler::sampleNaive(ob::State *state) 
{
    // ******* START OF YOUR CODE HERE *******//

    // ******* END OF YOUR CODE HERE *******//
    
    //The valid state sampler must return false if the state is in-collision
    return isStateValid(state);
}

bool DiskSampler::sampleCorrect(ob::State *state)
{
    // ******* START OF YOUR CODE HERE *******//

    // ******* END OF YOUR CODE HERE *******//


    //The valid state sampler must return false if the state is in-collision
    return isStateValid(state);
}
