#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 0.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGHudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.h"
#import "SWGHudsonnodeMonitorsResponseTimeMonitorData.h"
#import "SWGHudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2.h"
#import "SWGHudsonutilClockDifference.h"


@protocol SWGHudsonmodelHudsonMasterComputerMonitorData
@end

@interface SWGHudsonmodelHudsonMasterComputerMonitorData : SWGObject


@property(nonatomic) SWGHudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2* hudsonNodeMonitorsSwapSpaceMonitor;

@property(nonatomic) SWGHudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace* hudsonNodeMonitorsTemporarySpaceMonitor;

@property(nonatomic) SWGHudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace* hudsonNodeMonitorsDiskSpaceMonitor;

@property(nonatomic) NSString* hudsonNodeMonitorsArchitectureMonitor;

@property(nonatomic) SWGHudsonnodeMonitorsResponseTimeMonitorData* hudsonNodeMonitorsResponseTimeMonitor;

@property(nonatomic) SWGHudsonutilClockDifference* hudsonNodeMonitorsClockMonitor;

@property(nonatomic) NSString* class;

@end
