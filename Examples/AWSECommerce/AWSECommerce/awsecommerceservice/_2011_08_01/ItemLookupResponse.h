// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Items;
@class OperationRequest;

/**
 (public class)
 
 @ingroup AWSECommerceServicePortType
*/
@interface ItemLookupResponse : NSObject <PicoBindable> {

@private
    OperationRequest *_operationRequest;
    NSMutableArray *_items;

}


/**
 (public property)
 
 type : class OperationRequest
*/
@property (nonatomic, retain) OperationRequest *operationRequest;

/**
 (public property)
 
 entry type : class Items
*/

@property (nonatomic, retain) NSMutableArray *items;


@end
