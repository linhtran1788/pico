// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetUserRequestType.h"

@implementation Trading_GetUserRequestType

@synthesize itemID = _itemID;
@synthesize userID = _userID;
@synthesize includeExpressRequirements = _includeExpressRequirements;
@synthesize includeFeatureEligibility = _includeFeatureEligibility;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetUserRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemID" propertyName:@"itemID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"itemID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"UserID" propertyName:@"userID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"userID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"IncludeExpressRequirements" propertyName:@"includeExpressRequirements" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"includeExpressRequirements"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"IncludeFeatureEligibility" propertyName:@"includeFeatureEligibility" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"includeFeatureEligibility"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.itemID = nil;
    self.userID = nil;
    self.includeExpressRequirements = nil;
    self.includeFeatureEligibility = nil;
    [super dealloc];
}

@end