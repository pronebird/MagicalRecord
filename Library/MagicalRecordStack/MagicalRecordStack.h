//
//  Copyright © 2013 Magical Panda Software LLC. All rights reserved.

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MagicalRecordDeprecated.h"

@interface MagicalRecordStack : NSObject

@property (readonly, nonnull, nonatomic, copy) NSString *stackName;

@property (readonly, nonnull, nonatomic, strong) NSManagedObjectContext *context;
@property (readonly, nonnull, nonatomic, strong) NSManagedObjectModel *model;
@property (readonly, nonnull, nonatomic, strong) NSPersistentStoreCoordinator *coordinator;
@property (readonly, nullable, nonatomic, strong) NSPersistentStore *store;

@property (nonatomic, assign) BOOL loggingEnabled;
@property (nonatomic, assign) BOOL saveOnApplicationWillTerminate;
@property (nonatomic, assign) BOOL saveOnApplicationWillResignActive;

+ (nonnull instancetype)defaultStack;
+ (void)setDefaultStack:(nullable MagicalRecordStack *)stack;

+ (nonnull instancetype)stack;

- (void)reset;

- (nonnull NSManagedObjectContext *)newPrivateQueueContext;

- (void)setModelFromClass:(nonnull Class)modelClass;
- (void)setModelNamed:(nonnull NSString *)modelName;

@end

@interface MagicalRecordStack (MagicalRecordDeprecated)

- (nonnull NSManagedObjectContext *)newConfinementContext MR_DEPRECATED_WILL_BE_REMOVED_IN_PLEASE_USE("4.0", "a context with a type of `NSPrivateQueueConcurrencyType` or `NSMainQueueConcurrencyType`");

@end
