# Supervised-Semi-Supervised-and-Unsupervised-Learning

1. Supervised, Semi-Supervised, and Unsupervised Learning

(a) Download the Breast Cancer Wisconsin (Diagnostic) Data Set from:
https://archive.ics.uci.edu/ml/datasets/Breast+Cancer+Wisconsin+
Download the data in https://archive.ics.uci.edu/ml/
machine-learning-databases/breast-cancer-wisconsin/wdbc.data, which
has IDs, classes (Benign=B, Malignant=M), and 30 attributes. This data has
two output classes. Use the first 20% of the positive and negative classes in the
file as the test set and the rest as the training set.

i. Supervised Learning: Train an L 1 -penalized SVM to classify the data.
Use 5 fold cross validation to choose the penalty parameter. Use normalized
data. Report the average accuracy, precision, recall, F-score, and AUC, for
both training and test sets over your M runs. Plot the ROC and report the
confusion matrix for training and testing in one of the runs.

ii. Semi-Supervised Learning/ Self-training: select 50% of the positive
class along with 50% of the negative class in the training set as labeled data
and the rest as unlabelled data. You can select them randomly.

A. Train an L 1 -penalized SVM to classify the labeled data Use normalized
data. Choose the penalty parameter using 5 fold cross validation.

B. Find the unlabeled data point that is the farthest to the decision boundary
of the SVM. Let the SVM label it (ignore its true label), and add it to
the labeled data, and retrain the SVM. Continue this process until all
unlabeled data are used. Test the final SVM on the test data andthe
average accuracy, precision, recall, F-score, and AUC, for both training
and test sets over your M runs. Plot the ROC and report the confusion
matrix for training and testing in one of the runs.

iii. Unsupervised Learning: Run k-means algorithm on the whole training
set. Ignore the labels of the data, and assume k = 2.

A. Run the k-means algorithm multiple times. Make sure that you initialize
the algoritm randomly. How do you make sure that the algorithm was
not trapped in a local minimum?

B. Compute the centers of the two clusters and find the closest 30 data
points to each center. Read the true labels of those 30 data points and
take a majority poll within them. The majority poll becomes the label
predicted by k-means for the members of each cluster. Then compare the
labels provided by k-means with the true labels of the training data and
report the average accuracy, precision, recall, F-score, and AUC over M
runs, and ROC and the confusion matrix for one of the runs. 

C. Classify test data based on their proximity to the centers of the clusters.
Report the average accuracy, precision, recall, F-score, and AUC over M
runs, and ROC and the confusion matrix for one of the runs for the test
data.

iv. Spectral Clustering: Repeat 1(b)iii using spectral clustering, which is clus-
tering based on kernels. Research what spectral clustering is. Use RBF
kernel.

v. One can expect that supervised learning on the full data set works better than
semi-supervised learning with half of the data set labeled.One can expects
that unsupervised learning underperforms in such situations. Compare the
results you obtained by those methods.
