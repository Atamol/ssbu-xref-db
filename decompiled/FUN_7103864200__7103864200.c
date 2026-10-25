// addr:      7103864200
// offset:    0x3864200
// name:      FUN_7103864200
// mangled:   
// signature: undefined __cdecl FUN_7103864200(logic_error * param_1)


void FUN_7103864200(logic_error *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined **local_58 [2];
  undefined **local_48;
  long *local_40;
  char *local_38;
  char *pcStack_30;
  undefined4 local_28;
  
  std::logic_error::logic_error((logic_error *)local_58,param_1);
  local_58[0] = &PTR_FUN_710526ee48;
  local_48 = &PTR_FUN_710526ee70;
  local_40 = (long *)0x0;
  local_38 = 
  "void boost::topo_sort_visitor<std::__1::back_insert_iterator<std::__1::vector<void *, nu::ModuleAllocator<void *> > > >::back_edge(const Edge &, Graph &) [OutputIterator = std::__1::back_insert_iterator<std::__1::vector<void *, nu::ModuleAllocator<void *> > >, Edge = boost::detail::edge_desc_impl<boost::bidirectional_tag, void *>, Graph = const boost::adjacency_list<boost::listS, boost::listS, boost::bidirectionalS, boost::property<boost::vertex_index_t, long, nu::Graph<boost::uuids::uuid, std::__1::pair<nu::InstanceHandle<nu::RenderPassBase>, nu::InstanceHandle<nu::RenderPassBase> > >::vertex_property>, nu::Graph<boost::uuids::uuid, std::__1::pair<nu::InstanceHandle<nu::RenderPassBase>, nu::InstanceHandle<nu::RenderPassBase> > >::edge_property, boost::no_property, boost::listS>]"
  ;
  pcStack_30 = 
  "C:/c2/p4/nu/work/libraries/nu4/source/externals/boost/1_66_0\\boost/graph/topological_sort.hpp";
  local_28 = 0x29;
  uVar1 = FUN_71038642a0((logic_error *)local_58);
  local_48 = &PTR___cxa_pure_virtual_710506dd88;
  if ((local_40 != (long *)0x0) && (uVar2 = (**(code **)(*local_40 + 0x20))(), (uVar2 & 1) != 0)) {
    local_40 = (long *)0x0;
  }
  std::invalid_argument::~invalid_argument((invalid_argument *)local_58);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar1);
}

