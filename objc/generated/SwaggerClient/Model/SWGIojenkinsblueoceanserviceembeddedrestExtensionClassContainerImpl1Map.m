#import "SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.h"

@implementation SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"ioJenkinsBlueoceanServiceEmbeddedRestPipelineImpl": @"io.jenkins.blueocean.service.embedded.rest.PipelineImpl", @"ioJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl": @"io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl", @"class": @"_class" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"ioJenkinsBlueoceanServiceEmbeddedRestPipelineImpl", @"ioJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl", @"class"];
  return [optionalProperties containsObject:propertyName];
}

@end
