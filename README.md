# Undergraduate Projects

1. [PSTAT 176](#PSTAT-176)
2. [PHYS 188](#PHYS-188)
3. [PHYS 240](#PHYS-240)
4. [Fourth Example](#fourth-examplehttpwwwfourthexamplecom)

## PSTAT 176
The PSTAT 176 folder contains projects from my Advanced Mathematical Finance Course. It focused on topics in option pricing, monte carlo simulation, and other miscellaneous material such as the Markowitz Mean-Variance portfolio optimization and material on interest rate swaps. The homeworks folder contains all homework coding projects which make use of different monte carlo simulation and variance reduction techniques such as anithetic variates, quasi-monte carlo, stratified sampling, importance sampling, and control variates. The final project is on pricing American options using the Longstaff-Schwartz algorithm and control variates to reduce variance in the estimate.

### HW 1 ([link](https://github.com/rohitpenumarti/University-Projects/tree/dev/PHYS%20240))

## PHYS 240
The PHYS 240 folder contains projects from my Statistics, Data Analysis, and Machine Learning for Physicists course. There are several projects that focus on parameter estimation for astronomical systems. I use chi-square fitting and non-linear least squares to determine model parameters. MCMC is also another model estimation technique that uses posterior parameter space chain to sample parameters. Another method is Gaussian mixture models to estimate parameters and classify outlier data. I use bootstrap resampling to estimate errors in parameter estimation. I also use PCA to reduce dimension in image data as well as Gaussian Process Regression to estimate bad pixel values.

## PHYS 188
The PHYS 188 folder contains a project focused on Neural Network Classification. It is part of a course in UC Berkeley's physics curriculum which I used to learn more in my free time. The first part of the project focused on classification of MNIST data, using 40000 training images and 10000 images for testing, using the Keras package in python. I used several methods to attain the highest possible results. First, I used pure a Neural Net using Dense layers and grid searches to optimze hyperparameters to achieve the highest accuracy. Using this method, I created a basic architecture that achieved ~97.5% accuracy after 5 epochs. No advanced methods were used here. For the second method, I introduced convolutional neural networks which have been shown to be king in the field of image recognition. I created a more complex architecture which made use of convolution layers, pooling layers, a decaying learning rate, and dense layers. Using this algorithm, I was able to achieve ~99.5% accuracy in just 15 epochs. For higher accuracy, data augmentation and batch normalization can be used but in the process sacrificing computational time which can be mitigated to some extent with the use of a GPU. The second part of the project focused on classification of phases of particles in the 2D Ising model using tensorflow. I used simple dense layers to and grid searches to optimize hyperparameters. To view this project, view the Project3_288.ipynb file in the PHYS-188/Homeworks/Project3 folder.
