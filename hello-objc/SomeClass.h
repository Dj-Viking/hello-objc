//
//  SomeClass.m
//  hello-objc
//
//  Created by Anders Ackerman on 9/3/22.
//

#import <Foundation/Foundation.h>

@interface SomeClass : NSObject
- (NSNumber *)multiplyA:(NSNumber*)a withB:(NSNumber *)b;
- (NSNumber *)addA:(NSNumber*)a onB:(NSNumber *)b;
@end

@implementation SomeClass

- (NSNumber *)addA:(NSNumber *)a onB:(NSNumber *)b {
    
    float num1 = [a floatValue];
    float num2 = [b floatValue];
    float sum = num1 + num2;
    
    NSNumber *result = [NSNumber numberWithFloat:sum];
    return result;
    
}

- (NSNumber *)multiplyA:(NSNumber *)a withB:(NSNumber *)b {
    
    float num1 = [a floatValue];
    float num2 = [b floatValue];
    float product = num1 * num2;
    
    NSNumber *result = [NSNumber numberWithFloat:product];
    return result;
    
}

@end
