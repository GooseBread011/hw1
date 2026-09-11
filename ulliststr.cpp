#include <cstddef>
#include <stdexcept>
#include "ulliststr.h"

ULListStr::ULListStr()
{
  head_ = NULL;
  tail_ = NULL;
  size_ = 0;
}

ULListStr::~ULListStr()
{
  clear();
}

bool ULListStr::empty() const
{
  return size_ == 0;
}

size_t ULListStr::size() const
{
  return size_;
}

// WRITE YOUR CODE HERE

void ULListStr::set(size_t loc, const std::string& val)
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  *ptr = val;
}

std::string& ULListStr::get(size_t loc)
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

std::string const & ULListStr::get(size_t loc) const
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

void ULListStr::clear()
{
  while(head_ != NULL){
    Item *temp = head_->next;
    delete head_;
    head_ = temp;
  }
  tail_ = NULL;
  size_ = 0;
}

// Push back function - add to back of list
void ULListStr::push_back(const std::string& val)
{
  // Empty list
  if (tail_ == NULL){
    head_ = new Item;
    tail_ = head_;

    // Point first to index 0
    // Point last to index 1
    tail_->first = 0;
    tail_->last = 1;
    // Put string in index 0
    tail_->val[0] = val;
  }
  // We have room


  // No we don't

}

// add new value to front of list
void ULListStr::push_front(const std::string& val)
{
  // Empty list 
  if (head_ == NULL){
    head_ == new Item;
    tail_ = head_;
  }
  // We have room (we have space left in ARRSIZE)
  else if (tail_->last < ARRSIZE){
    tail->[tail->last] = val;
  }

  // No we don't
}

// Push_front function - remove from back of list
void ULListStr::pop_back()
{
  // empty list case
  if (size_ = 0){
    return; // Nothing happens
  }
  tail_->last = tail->last - 1;
  size_--;

  // Empty node left?
  if (tail_->first == tail_last){
    Item* temp = tail_;
    tail_ = tail->prev;
    if (tail_ != NULL){
      tail_->next = NULL;
    }
    else{
      head_ = NULL;
    }
    delete temp;
  }
}

// Pop_back function - remove from front of list
void ULListStr::pop_front()
{
  //Empty list
  if(size_ == 0){
    return; // Nothing happens
  }
  // head moves to first
  // size decreases
  head_->first = head_->first + 1;
  size_--;

  // What if we are left with an empty node after we do so?
  if (head_->first == head_->last){
    Item* temp = head_;
    head_ = head_->next;
    if (head_ != NULL){
      head->prev = NULL;
    }
    else{
      tail_ = NULL;
    }
    delete temp;
  }
}

// back function - returns a reference to the back element
std::string const& ULListStr::back() const
{
  return tail_->val[tail_->last - 1];
}

// Front function - returns a reference to the front element
std::string const& ULListStr::front() const
{
  return head_->val[head->first];
}

//GetValatLoc function - returns a pointer to the item at i, loc 
std::string* ULListStr::getValAtLoc(size_t loc) const
{

}