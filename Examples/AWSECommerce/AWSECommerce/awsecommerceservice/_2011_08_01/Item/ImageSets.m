// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "ImageSets.h"
#import "ImageSet.h"

@implementation ImageSets

@synthesize imageSet = _imageSet;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    return nil;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"ImageSet" propertyName:@"imageSet" type:PICO_TYPE_OBJECT clazz:[ImageSet class]];
    [map setObject:ps forKey:@"imageSet"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.imageSet = nil;
    [super dealloc];
}

@end
