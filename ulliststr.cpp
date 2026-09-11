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
  // We have room

  // No we don't
}

// Push_front function - remove from back of list
void ULListStr::pop_back()
{
  
}

// Pop_back function - remove from back of list
void ULListStr::pop_front()
{

}

// back function - returns a reference to the back element
std::string const& ULListStr::back() const
{

}

// Front function - returns a reference to the front element
std::string const& ULListStr::front() const
{

}

//GetValatLoc function - returns a pointer to the item at i, loc 
std::string* ULListStr::getValAtLoc(size_t loc) const
{

}