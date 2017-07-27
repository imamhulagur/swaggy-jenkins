//
// HudsonmodelQueueLeftItem.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class HudsonmodelQueueLeftItem: JSONEncodable {

    public var _class: String?
    public var actions: [HudsonmodelCauseAction]?
    public var blocked: Bool?
    public var buildable: Bool?
    public var id: Int32?
    public var inQueueSince: Int32?
    public var params: String?
    public var stuck: Bool?
    public var task: HudsonmodelFreeStyleProject?
    public var url: String?
    public var why: String?
    public var cancelled: Bool?
    public var executable: HudsonmodelFreeStyleBuild?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["actions"] = self.actions?.encodeToJSON()
        nillableDictionary["blocked"] = self.blocked
        nillableDictionary["buildable"] = self.buildable
        nillableDictionary["id"] = self.id?.encodeToJSON()
        nillableDictionary["inQueueSince"] = self.inQueueSince?.encodeToJSON()
        nillableDictionary["params"] = self.params
        nillableDictionary["stuck"] = self.stuck
        nillableDictionary["task"] = self.task?.encodeToJSON()
        nillableDictionary["url"] = self.url
        nillableDictionary["why"] = self.why
        nillableDictionary["cancelled"] = self.cancelled
        nillableDictionary["executable"] = self.executable?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
