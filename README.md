# Undergraduate Projects

1. [PHYS 188](#PHYS-188)
2. [PHYS 240](#PHYS-240)
    1. [Homework #1](#HW-1)
3. [PSTAT 176](#PSTAT-176)
4. [Fourth Example](#fourth-examplehttpwwwfourthexamplecom)

## PHYS 188 ([link](https://github.com/rohitpenumarti/University-Projects/blob/dev/PHYS-188/Homework/Project3/Project3_288.ipynb))
The PHYS 188 folder contains a project focused on Neural Network Classification. It is part of a course in UC Berkeley's physics curriculum which I used to learn more in my free time. Link to the project file is above. The first part of the project focused on classification of MNIST data, using 40000 training images and 10000 images for testing, using the Keras package in python. I used several methods to attain the highest possible results. First, I used a deep neural net using Dense layers and grid searches to optimze hyperparameters to achieve the highest accuracy. Using this method, I created a basic architecture that achieved ~97.4% accuracy after 5 epochs. No advanced methods were used here. For the second method, I introduced convolutional neural networks which have been shown to be king in the field of image recognition. I created a more complex architecture which made use of convolution layers, pooling layers, a decaying learning rate, and dense layers. Using this algorithm, I was able to achieve ~99.4% accuracy in just 15 epochs. For higher accuracy, data augmentation and batch normalization can be used but in the process sacrificing computational time which can be mitigated to some extent with the use of a GPU. The second part of the project focused on classification of phases of particles in the 2D Ising model using tensorflow. I used simple dense layers and grid searches to optimize hyperparameters.

## PHYS 240 ([link](https://github.com/rohitpenumarti/University-Projects/tree/dev/PHYS%20240))
The PHYS 240 folder contains projects from my Statistics, Data Analysis, and Machine Learning for Physicists course. There were four assignments required for the course.

### HW 1 ([link](https://github.com/rohitpenumarti/University-Projects/blob/dev/PHYS%20240/Homework%20%231.ipynb))

### HW 2 ([link](https://github.com/rohitpenumarti/University-Projects/blob/dev/PHYS%20240/Homework%20%232.ipynb))

### HW 3 ([link](https://github.com/rohitpenumarti/University-Projects/blob/dev/PHYS%20240/Homework%20%233.ipynb))

### HW 4 ([link](https://github.com/rohitpenumarti/University-Projects/blob/dev/PHYS%20240/HW4%20(Final%20Project).ipynb))

## PSTAT 176 ([link](https://github.com/rohitpenumarti/University-Projects/tree/dev/PSTAT%20176))
The PSTAT 176 folder contains projects from my Advanced Mathematical Finance Course. It focused on topics in option pricing, monte carlo simulation, and other miscellaneous material such as the Markowitz Mean-Variance portfolio optimization and material on interest rate swaps. The homeworks folder contains all homework coding projects which make use of different monte carlo simulation and variance reduction techniques such as anithetic variates, quasi-monte carlo, stratified sampling, importance sampling, and control variates. The final project is on pricing American options using the Longstaff-Schwartz algorithm and control variates to reduce variance in the estimate.
