#include "PersonNode.h"

PersonNode::PersonNode() {
	address = "";
	fName = "";
	lName = "";
	PersonNode* next = NULL;
	phone = "";
}

void PersonNode::setFName(string fName) {
	this->fName = fName;
}
