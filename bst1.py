class node():
	def __init__(self,value=None):
		self.value=value
		self.left=None
		self.right=None
class bst:
	def __init__(self):
		self.root=None
	def insert(self,value):
		if self.root==None:
			self.root=node(value)
		else:
			self._insert(value,self.root)
	def _insert(self,value,cur_node):
		if value<cur_node.value:
			
			if cur_node.left_child==None:
				cur_node.left_child=node(value)
			else:
				self._insert(value,cur_node.left_child)
		else:

			if cur_node.right_child==None:
				cur_node.right_child=node(value)
			else:
				self._insert(value,cur_node.right_child)
	def printtree(self):
		if self.root!=None:
			self.printtree(self.root)


