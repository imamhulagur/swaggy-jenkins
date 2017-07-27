part of swagger.api;


@Entity()
class HudsonmodelHudson {
  
  @Property(name: '_class')
  String _class = null;
  

  @Property(name: 'assignedLabels')
  List<HudsonmodelHudsonassignedLabels> assignedLabels = [];
  

  @Property(name: 'mode')
  String mode = null;
  

  @Property(name: 'nodeDescription')
  String nodeDescription = null;
  

  @Property(name: 'nodeName')
  String nodeName = null;
  

  @Property(name: 'numExecutors')
  int numExecutors = null;
  

  @Property(name: 'description')
  String description = null;
  

  @Property(name: 'jobs')
  List<HudsonmodelFreeStyleProject> jobs = [];
  

  @Property(name: 'primaryView')
  HudsonmodelAllView primaryView = null;
  

  @Property(name: 'quietingDown')
  bool quietingDown = null;
  

  @Property(name: 'slaveAgentPort')
  int slaveAgentPort = null;
  

  @Property(name: 'unlabeledLoad')
  JenkinsmodelUnlabeledLoadStatistics unlabeledLoad = null;
  

  @Property(name: 'useCrumbs')
  bool useCrumbs = null;
  

  @Property(name: 'useSecurity')
  bool useSecurity = null;
  

  @Property(name: 'views')
  List<HudsonmodelAllView> views = [];
  
  HudsonmodelHudson();

  @override
  String toString()  {
    return 'HudsonmodelHudson[_class=$_class, assignedLabels=$assignedLabels, mode=$mode, nodeDescription=$nodeDescription, nodeName=$nodeName, numExecutors=$numExecutors, description=$description, jobs=$jobs, primaryView=$primaryView, quietingDown=$quietingDown, slaveAgentPort=$slaveAgentPort, unlabeledLoad=$unlabeledLoad, useCrumbs=$useCrumbs, useSecurity=$useSecurity, views=$views, ]';
  }

}

