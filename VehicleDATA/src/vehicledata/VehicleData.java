/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package vehicledata;

import java.beans.PropertyChangeListener;
import java.beans.PropertyChangeSupport;
import java.io.Serializable;
import javax.persistence.Basic;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.NamedQueries;
import javax.persistence.NamedQuery;
import javax.persistence.Table;
import javax.persistence.Transient;

/**
 *
 * @author Administrator
 */
@Entity
@Table(name = "vehicle_data", catalog = "XII", schema = "")
@NamedQueries({@NamedQuery(name = "VehicleData.findAll", query = "SELECT v FROM VehicleData v"), @NamedQuery(name = "VehicleData.findByRegNo", query = "SELECT v FROM VehicleData v WHERE v.regNo = :regNo"), @NamedQuery(name = "VehicleData.findByVehicleName", query = "SELECT v FROM VehicleData v WHERE v.vehicleName = :vehicleName"), @NamedQuery(name = "VehicleData.findByClass1", query = "SELECT v FROM VehicleData v WHERE v.class1 = :class1"), @NamedQuery(name = "VehicleData.findByMfgBy", query = "SELECT v FROM VehicleData v WHERE v.mfgBy = :mfgBy"), @NamedQuery(name = "VehicleData.findByYearMfg", query = "SELECT v FROM VehicleData v WHERE v.yearMfg = :yearMfg"), @NamedQuery(name = "VehicleData.findByColor", query = "SELECT v FROM VehicleData v WHERE v.color = :color"), @NamedQuery(name = "VehicleData.findByFuelUsed", query = "SELECT v FROM VehicleData v WHERE v.fuelUsed = :fuelUsed"), @NamedQuery(name = "VehicleData.findByIssuedTo", query = "SELECT v FROM VehicleData v WHERE v.issuedTo = :issuedTo"), @NamedQuery(name = "VehicleData.findByAddress", query = "SELECT v FROM VehicleData v WHERE v.address = :address")})
public class VehicleData implements Serializable {
    @Transient
    private PropertyChangeSupport changeSupport = new PropertyChangeSupport(this);
    private static final long serialVersionUID = 1L;
    @Id
    @Basic(optional = false)
    @Column(name = "Reg_No")
    private String regNo;
    @Column(name = "Vehicle_Name")
    private String vehicleName;
    @Column(name = "Class")
    private String class1;
    @Column(name = "Mfg_By")
    private String mfgBy;
    @Column(name = "Year_Mfg")
    private Integer yearMfg;
    @Column(name = "Color")
    private String color;
    @Column(name = "Fuel_Used")
    private String fuelUsed;
    @Column(name = "Issued_To")
    private String issuedTo;
    @Column(name = "Address")
    private String address;

    public VehicleData() {
    }

    public VehicleData(String regNo) {
        this.regNo = regNo;
    }

    public String getRegNo() {
        return regNo;
    }

    public void setRegNo(String regNo) {
        String oldRegNo = this.regNo;
        this.regNo = regNo;
        changeSupport.firePropertyChange("regNo", oldRegNo, regNo);
    }

    public String getVehicleName() {
        return vehicleName;
    }

    public void setVehicleName(String vehicleName) {
        String oldVehicleName = this.vehicleName;
        this.vehicleName = vehicleName;
        changeSupport.firePropertyChange("vehicleName", oldVehicleName, vehicleName);
    }

    public String getClass1() {
        return class1;
    }

    public void setClass1(String class1) {
        String oldClass1 = this.class1;
        this.class1 = class1;
        changeSupport.firePropertyChange("class1", oldClass1, class1);
    }

    public String getMfgBy() {
        return mfgBy;
    }

    public void setMfgBy(String mfgBy) {
        String oldMfgBy = this.mfgBy;
        this.mfgBy = mfgBy;
        changeSupport.firePropertyChange("mfgBy", oldMfgBy, mfgBy);
    }

    public Integer getYearMfg() {
        return yearMfg;
    }

    public void setYearMfg(Integer yearMfg) {
        Integer oldYearMfg = this.yearMfg;
        this.yearMfg = yearMfg;
        changeSupport.firePropertyChange("yearMfg", oldYearMfg, yearMfg);
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        String oldColor = this.color;
        this.color = color;
        changeSupport.firePropertyChange("color", oldColor, color);
    }

    public String getFuelUsed() {
        return fuelUsed;
    }

    public void setFuelUsed(String fuelUsed) {
        String oldFuelUsed = this.fuelUsed;
        this.fuelUsed = fuelUsed;
        changeSupport.firePropertyChange("fuelUsed", oldFuelUsed, fuelUsed);
    }

    public String getIssuedTo() {
        return issuedTo;
    }

    public void setIssuedTo(String issuedTo) {
        String oldIssuedTo = this.issuedTo;
        this.issuedTo = issuedTo;
        changeSupport.firePropertyChange("issuedTo", oldIssuedTo, issuedTo);
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        String oldAddress = this.address;
        this.address = address;
        changeSupport.firePropertyChange("address", oldAddress, address);
    }

    @Override
    public int hashCode() {
        int hash = 0;
        hash += (regNo != null ? regNo.hashCode() : 0);
        return hash;
    }

    @Override
    public boolean equals(Object object) {
        // TODO: Warning - this method won't work in the case the id fields are not set
        if (!(object instanceof VehicleData)) {
            return false;
        }
        VehicleData other = (VehicleData) object;
        if ((this.regNo == null && other.regNo != null) || (this.regNo != null && !this.regNo.equals(other.regNo))) {
            return false;
        }
        return true;
    }

    @Override
    public String toString() {
        return "vehicledata.VehicleData[regNo=" + regNo + "]";
    }

    public void addPropertyChangeListener(PropertyChangeListener listener) {
        changeSupport.addPropertyChangeListener(listener);
    }

    public void removePropertyChangeListener(PropertyChangeListener listener) {
        changeSupport.removePropertyChangeListener(listener);
    }

}
