package io.swagger.client.model {


    [XmlRootNode(name="HudsonmodelCauseUserIdCause")]
    public class HudsonmodelCauseUserIdCause {
                [XmlElement(name="_class")]
        public var class: String = null;
                [XmlElement(name="shortDescription")]
        public var shortDescription: String = null;
                [XmlElement(name="userId")]
        public var userId: String = null;
                [XmlElement(name="userName")]
        public var userName: String = null;

    public function toString(): String {
        var str: String = "HudsonmodelCauseUserIdCause: ";
        str += " (class: " + class + ")";
        str += " (shortDescription: " + shortDescription + ")";
        str += " (userId: " + userId + ")";
        str += " (userName: " + userName + ")";
        return str;
    }

}

}
